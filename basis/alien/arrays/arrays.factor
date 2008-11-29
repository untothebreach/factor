! Copyright (C) 2008 Slava Pestov.
! See http://factorcode.org/license.txt for BSD license.
USING: alien arrays alien.c-types alien.structs
sequences math kernel namespaces make libc cpu.architecture ;
IN: alien.arrays

UNION: value-type array struct-type ;

M: array c-type ;

M: array c-type-class drop object ;

M: array heap-size unclip heap-size [ * ] reduce ;

M: array c-type-align first c-type-align ;

M: array c-type-stack-align? drop f ;

M: array unbox-parameter drop "void*" unbox-parameter ;

M: array unbox-return drop "void*" unbox-return ;

M: array box-parameter drop "void*" box-parameter ;

M: array box-return drop "void*" box-return ;

M: array stack-size drop "void*" stack-size ;

M: value-type c-type-reg-class drop int-regs ;

M: value-type c-type-boxer-quot drop f ;

M: value-type c-type-unboxer-quot drop f ;

M: value-type c-type-getter
    drop [ swap <displaced-alien> ] ;

M: value-type c-type-setter ( type -- quot )
    [
        dup c-type-getter % \ swap , heap-size , \ memcpy ,
    ] [ ] make ;
