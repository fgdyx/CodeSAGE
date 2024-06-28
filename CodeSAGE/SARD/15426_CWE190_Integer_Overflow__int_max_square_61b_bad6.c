#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR2 = VAR3;
 return VAR2;
}
#endif
