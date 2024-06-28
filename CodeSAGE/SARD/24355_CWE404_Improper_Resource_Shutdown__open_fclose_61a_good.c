#ifndef VAR1
int FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 if (VAR2 != -1)
 {
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
