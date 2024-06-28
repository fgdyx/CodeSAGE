#ifndef VAR1
void FUN1(double * VAR2)
{
 double VAR3 = *VAR2;
 FUN2(VAR3);
}
void FUN3(double * VAR2)
{
 double VAR3 = *VAR2;
 VAR3 = 5.0;
 FUN2(VAR3);
}
#endif
