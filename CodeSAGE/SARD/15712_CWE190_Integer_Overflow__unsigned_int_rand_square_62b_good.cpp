#ifndef VAR1
void FUN1(unsigned int &VAR2)
{
 VAR2 = 2;
}
void FUN2(unsigned int &VAR2)
{
 VAR2 = (unsigned int)FUN3();
}
#endif
