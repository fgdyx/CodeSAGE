#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 }
 }
 return VAR3;
}
#endif
