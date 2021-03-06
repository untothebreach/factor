namespace factor {

template <typename Type> struct data_root : public tagged<Type> {
  factor_vm* parent;

  void push() {
    parent->data_roots.push_back(data_root_range(&this->value_, 1));
  }

  data_root(cell value, factor_vm* parent)
      : tagged<Type>(value), parent(parent) {
    push();
  }

  data_root(Type* value, factor_vm* parent)
      : tagged<Type>(value), parent(parent) {
    push();
  }

  const data_root<Type>& operator=(const Type* x) {
    tagged<Type>::operator=(x);
    return *this;
  }
  const data_root<Type>& operator=(const cell& x) {
    tagged<Type>::operator=(x);
    return *this;
  }

  ~data_root() { parent->data_roots.pop_back(); }
};

/* A similar hack for the bignum implementation */
struct gc_bignum {
  bignum** addr;
  factor_vm* parent;

  gc_bignum(bignum** addr, factor_vm* parent) : addr(addr), parent(parent) {
    if (*addr)
      parent->check_data_pointer(*addr);
    parent->bignum_roots.push_back((cell)addr);
  }

  ~gc_bignum() {
    FACTOR_ASSERT(parent->bignum_roots.back() == (cell)addr);
    parent->bignum_roots.pop_back();
  }
};

#define GC_BIGNUM(x) gc_bignum x##__data_root(&x, this)

}
