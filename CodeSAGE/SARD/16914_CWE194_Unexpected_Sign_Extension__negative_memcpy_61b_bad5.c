#ifndef VAR1
short FUN1(short VAR2)
{
 /* FLAW: Use a negative number */
 VAR2 = -1;
 return VAR2;
}
#endif
