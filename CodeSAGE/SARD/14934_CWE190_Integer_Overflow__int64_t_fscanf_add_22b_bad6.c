#ifndef VAR1
extern int VAR2;
void FUN1(int64_t VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
