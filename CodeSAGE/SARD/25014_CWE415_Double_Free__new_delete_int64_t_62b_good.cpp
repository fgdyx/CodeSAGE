#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = new VAR2;
}
void FUN2(VAR2 * &VAR3)
{
 VAR3 = new VAR2;
 delete VAR3;
}
#endif
