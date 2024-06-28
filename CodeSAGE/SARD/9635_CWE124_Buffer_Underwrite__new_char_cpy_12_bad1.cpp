#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 }
 else
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strcpy(VAR2, VAR4);
 FUN3(VAR2);
 }
}
#endif
