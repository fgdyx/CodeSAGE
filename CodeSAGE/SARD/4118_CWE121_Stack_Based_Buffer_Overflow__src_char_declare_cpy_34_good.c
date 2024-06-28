#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_34_unionType VAR3;
 char VAR4[100];
 VAR2 = VAR4;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[50] = "";
 strcpy(VAR7, VAR2);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
