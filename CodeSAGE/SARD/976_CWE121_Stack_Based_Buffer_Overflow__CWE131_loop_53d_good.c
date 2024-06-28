#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN2(VAR2[0]);
 }
}
#endif
