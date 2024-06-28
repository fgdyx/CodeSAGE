#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 switch(6)
 {
 case 6:
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR5, VAR2, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
#endif
