#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 }
 return VAR3;
}
#endif
