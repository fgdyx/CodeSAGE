#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Set data to zero */
 VAR2 = 0;
 return VAR2;
}
#endif
