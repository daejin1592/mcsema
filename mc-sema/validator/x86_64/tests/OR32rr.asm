BITS 64
;TEST_FILE_META_BEGIN
;TEST_TYPE=TEST_F
;TEST_IGNOREFLAGS=FLAG_AF
;TEST_FILE_META_END
    ; OR32rr
    mov ecx, 0x0
    mov edx, 0x1
    ;TEST_BEGIN_RECORDING
    or ecx, edx
    ;TEST_END_RECORDING
