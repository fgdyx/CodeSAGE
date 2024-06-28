#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3[2];
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR4[0]);
 }
 }
}
#endif
