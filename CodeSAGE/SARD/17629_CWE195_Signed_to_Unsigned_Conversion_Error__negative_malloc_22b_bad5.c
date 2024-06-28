#ifndef VAR1
extern int VAR2;
int FUN1(int VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a negative number */
 VAR3 = -1;
 }
 return VAR3;
}
#endif
