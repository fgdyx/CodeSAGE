#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_unionType VAR3;
 char * VAR4 = (char *)FUN2((10)*sizeof(char));
 char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
 VAR2 = VAR5;
 VAR2[0] = '';
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 char VAR8[10+1] = VAR9;
 memcpy(VAR2, VAR8, (strlen(VAR8) + 1) * sizeof(char));
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
