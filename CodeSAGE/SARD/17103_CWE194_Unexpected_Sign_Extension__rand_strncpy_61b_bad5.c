#ifndef VAR1
short FUN1(short VAR2)
{
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 return VAR2;
}
#endif
