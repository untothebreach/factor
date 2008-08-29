! Copyright (C) 2006, 2007 Slava Pestov.
! See http://factorcode.org/license.txt for BSD license.
USING: kernel accessors ui.gadgets ui.gestures namespaces ;
IN: ui.clipboards

! Two text transfer buffers
TUPLE: clipboard contents ;
: <clipboard> ( -- clipboard ) "" clipboard boa ;

GENERIC: paste-clipboard ( gadget clipboard -- )

M: object paste-clipboard
    clipboard-contents dup [ swap user-input ] [ 2drop ] if ;

GENERIC: copy-clipboard ( string gadget clipboard -- )

M: object copy-clipboard nip (>>contents) ;

SYMBOL: clipboard
SYMBOL: selection

: gadget-copy ( gadget clipboard -- )
    over gadget-selection? [
        >r [ gadget-selection ] keep r> copy-clipboard
    ] [
        2drop
    ] if ;

: com-copy ( gadget -- ) clipboard get gadget-copy ;

: com-copy-selection ( gadget -- ) selection get gadget-copy ;
