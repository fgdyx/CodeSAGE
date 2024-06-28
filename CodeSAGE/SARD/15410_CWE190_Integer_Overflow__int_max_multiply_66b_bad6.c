#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
#endif
