#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 / VAR2);
 }
}
#endif
