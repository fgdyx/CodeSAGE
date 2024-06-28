#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 switch(6)
 {
 case 6:
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memmove(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
#endif
