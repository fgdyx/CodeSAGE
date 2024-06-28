#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 {
 int VAR5[10] = {0};
 size_t VAR6;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0]);
 }
}
#endif
