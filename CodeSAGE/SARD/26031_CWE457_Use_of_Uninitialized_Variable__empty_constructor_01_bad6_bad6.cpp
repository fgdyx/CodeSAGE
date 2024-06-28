#ifndef VAR1
class VAR2
{
 public:
 FUN1()
 {
 /* FLAW: Empty constructor with no initialization list, so intOne is not initialized */
 }
 int VAR3;
};
void FUN2()
{
 VAR2 * VAR4 = new VAR2;
 FUN3(VAR4->VAR3);
}
#endif
