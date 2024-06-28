#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_34_unionType VAR3;
 char VAR4[50];
 char VAR5[100];
 VAR2 = VAR5;
 VAR2[0] = '';
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 memcpy(VAR2, VAR8, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
