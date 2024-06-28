#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a small buffer */
 VAR3 = new char[50];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 return VAR3;
}
#endif
