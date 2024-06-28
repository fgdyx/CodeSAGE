#ifndef VAR1
extern int VAR2;
short FUN1(short VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a random value that could be less than 0 */
 VAR3 = (short)FUN2();
 }
 return VAR3;
}
#endif
