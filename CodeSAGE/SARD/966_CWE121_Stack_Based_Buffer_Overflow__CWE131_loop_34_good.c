#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (int *)FUN2(10*sizeof(int));
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = {0};
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR2[VAR7] = VAR6[VAR7];
 }
 FUN3(VAR2[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
