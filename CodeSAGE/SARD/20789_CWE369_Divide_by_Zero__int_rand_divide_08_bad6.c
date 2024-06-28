#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN3();
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN4(100 / VAR2);
 }
}
#endif
