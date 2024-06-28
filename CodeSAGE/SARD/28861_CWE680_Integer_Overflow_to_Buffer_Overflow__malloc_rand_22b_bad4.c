#ifndef VAR1
extern int VAR2;
int FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = FUN2();
 }
 return VAR3;
}
#endif
