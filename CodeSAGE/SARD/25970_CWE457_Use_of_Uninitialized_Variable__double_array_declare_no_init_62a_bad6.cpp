#ifndef VAR1
void FUN1(double * &VAR2);
void FUN2()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
}
#endif
