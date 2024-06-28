#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_34_unionType VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR4;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[50] = "";
 FUN3(VAR7, strlen(VAR2), "", VAR2);
 FUN4(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
}
#endif
