#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR4[100*2];
 memset(VAR4, '', 100*2-1);
 VAR4[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR4, VAR2);
 FUN2(VAR4);
 }
}
#endif
