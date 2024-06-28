#ifndef VAR1
class VAR2
{
 public:
 FUN1() : FUN2(0)
 {
 }
 int VAR3;
};
static void FUN3()
{
 VAR2 * VAR4 = new VAR2;
 FUN4(VAR4->VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
