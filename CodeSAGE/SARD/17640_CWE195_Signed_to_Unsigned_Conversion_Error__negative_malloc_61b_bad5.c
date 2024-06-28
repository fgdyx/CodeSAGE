#ifndef VAR1
int FUN1(int VAR2)
{
 /* FLAW: Use a negative number */
 VAR2 = -1;
 return VAR2;
}
#endif
