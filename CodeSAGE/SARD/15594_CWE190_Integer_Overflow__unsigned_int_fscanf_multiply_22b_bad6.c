#ifndef VAR1
extern int VAR2;
void FUN1(unsigned int VAR3)
{
 if(VAR2)
 {
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 }
}
#endif
