#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to zero */
 VAR2 = 0;
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 / VAR2);
 }
 else
 {
 if( VAR2 != 0 )
 {
 FUN3(100 / VAR2);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
