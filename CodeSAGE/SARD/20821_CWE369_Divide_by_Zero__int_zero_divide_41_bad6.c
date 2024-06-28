#ifndef VAR1
static void FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR2);
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to zero */
 VAR2 = 0;
 FUN1(VAR2);
}
#endif
