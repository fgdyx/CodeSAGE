#ifndef VAR1
void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR2[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
