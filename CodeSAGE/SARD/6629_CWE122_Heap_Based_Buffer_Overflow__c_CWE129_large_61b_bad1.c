#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 return VAR2;
}
#endif
