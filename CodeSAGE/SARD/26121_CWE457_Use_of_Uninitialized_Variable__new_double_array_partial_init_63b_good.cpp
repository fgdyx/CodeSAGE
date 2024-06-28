#ifndef VAR1
void FUN1(double * * VAR2)
{
 double * VAR3 = *VAR2;
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4]);
 }
 }
 delete [] VAR3;
}
void FUN3(double * * VAR2)
{
 double * VAR3 = *VAR2;
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4]);
 }
 }
 delete [] VAR3;
}
#endif
