#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR6[VAR5];
 }
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
#endif
