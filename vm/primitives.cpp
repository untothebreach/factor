#include "master.hpp"

namespace factor
{

#define PRIMITIVE(name) VM_C_API void primitive_##name(factor_vm *parent) \
{ \
	parent->primitive_##name(); \
}

PRIMITIVE(alien_address)
PRIMITIVE(all_instances)
PRIMITIVE(array)
PRIMITIVE(array_to_quotation)
PRIMITIVE(become)
PRIMITIVE(bignum_add)
PRIMITIVE(bignum_and)
PRIMITIVE(bignum_bitp)
PRIMITIVE(bignum_divint)
PRIMITIVE(bignum_divmod)
PRIMITIVE(bignum_eq)
PRIMITIVE(bignum_greater)
PRIMITIVE(bignum_greatereq)
PRIMITIVE(bignum_less)
PRIMITIVE(bignum_lesseq)
PRIMITIVE(bignum_log2)
PRIMITIVE(bignum_mod)
PRIMITIVE(bignum_multiply)
PRIMITIVE(bignum_not)
PRIMITIVE(bignum_or)
PRIMITIVE(bignum_shift)
PRIMITIVE(bignum_subtract)
PRIMITIVE(bignum_to_fixnum)
PRIMITIVE(bignum_to_float)
PRIMITIVE(bignum_xor)
PRIMITIVE(bits_double)
PRIMITIVE(bits_float)
PRIMITIVE(byte_array)
PRIMITIVE(byte_array_to_bignum)
PRIMITIVE(call_clear)
PRIMITIVE(callback)
PRIMITIVE(callstack)
PRIMITIVE(callstack_to_array)
PRIMITIVE(check_datastack)
PRIMITIVE(clone)
PRIMITIVE(code_blocks)
PRIMITIVE(code_room)
PRIMITIVE(compact_gc)
PRIMITIVE(compute_identity_hashcode)
PRIMITIVE(data_room)
PRIMITIVE(datastack)
PRIMITIVE(die)
PRIMITIVE(disable_gc_events)
PRIMITIVE(dispatch_stats)
PRIMITIVE(displaced_alien)
PRIMITIVE(dlclose)
PRIMITIVE(dll_validp)
PRIMITIVE(dlopen)
PRIMITIVE(dlsym)
PRIMITIVE(double_bits)
PRIMITIVE(enable_gc_events)
PRIMITIVE(existsp)
PRIMITIVE(exit)
PRIMITIVE(fclose)
PRIMITIVE(fflush)
PRIMITIVE(fgetc)
PRIMITIVE(fixnum_divint)
PRIMITIVE(fixnum_divmod)
PRIMITIVE(fixnum_shift)
PRIMITIVE(fixnum_to_bignum)
PRIMITIVE(fixnum_to_float)
PRIMITIVE(float_add)
PRIMITIVE(float_bits)
PRIMITIVE(float_divfloat)
PRIMITIVE(float_eq)
PRIMITIVE(float_greater)
PRIMITIVE(float_greatereq)
PRIMITIVE(float_less)
PRIMITIVE(float_lesseq)
PRIMITIVE(float_mod)
PRIMITIVE(float_multiply)
PRIMITIVE(float_subtract)
PRIMITIVE(float_to_bignum)
PRIMITIVE(float_to_fixnum)
PRIMITIVE(float_to_str)
PRIMITIVE(fopen)
PRIMITIVE(fputc)
PRIMITIVE(fread)
PRIMITIVE(fseek)
PRIMITIVE(ftell)
PRIMITIVE(full_gc)
PRIMITIVE(fwrite)
PRIMITIVE(identity_hashcode)
PRIMITIVE(innermost_stack_frame_executing)
PRIMITIVE(innermost_stack_frame_scan)
PRIMITIVE(jit_compile)
PRIMITIVE(load_locals)
PRIMITIVE(lookup_method)
PRIMITIVE(mega_cache_miss)
PRIMITIVE(minor_gc)
PRIMITIVE(modify_code_heap)
PRIMITIVE(nano_count)
PRIMITIVE(optimized_p)
PRIMITIVE(profiling)
PRIMITIVE(quot_compiled_p)
PRIMITIVE(quotation_code)
PRIMITIVE(reset_dispatch_stats)
PRIMITIVE(resize_array)
PRIMITIVE(resize_byte_array)
PRIMITIVE(resize_string)
PRIMITIVE(retainstack)
PRIMITIVE(save_image)
PRIMITIVE(save_image_and_exit)
PRIMITIVE(set_datastack)
PRIMITIVE(set_innermost_stack_frame_quot)
PRIMITIVE(set_retainstack)
PRIMITIVE(set_slot)
PRIMITIVE(set_special_object)
PRIMITIVE(set_string_nth_fast)
PRIMITIVE(set_string_nth_slow)
PRIMITIVE(size)
PRIMITIVE(sleep)
PRIMITIVE(special_object)
PRIMITIVE(str_to_float)
PRIMITIVE(string)
PRIMITIVE(string_nth)
PRIMITIVE(strip_stack_traces)
PRIMITIVE(system_micros)
PRIMITIVE(tuple)
PRIMITIVE(tuple_boa)
PRIMITIVE(unimplemented)
PRIMITIVE(uninitialized_byte_array)
PRIMITIVE(word)
PRIMITIVE(word_code)
PRIMITIVE(wrapper)

}
