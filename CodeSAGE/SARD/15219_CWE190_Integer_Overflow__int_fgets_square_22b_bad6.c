#ifndef VAR1
extern int VAR2;
void FUN1(int VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 }
}
#endif
