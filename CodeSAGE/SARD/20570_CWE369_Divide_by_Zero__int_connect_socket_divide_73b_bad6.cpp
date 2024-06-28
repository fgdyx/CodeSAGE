#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 / VAR4);
}
#endif
