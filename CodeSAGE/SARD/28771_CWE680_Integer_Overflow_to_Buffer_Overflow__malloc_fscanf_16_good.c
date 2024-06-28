#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 VAR2 = 20;
 break;
 }
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
