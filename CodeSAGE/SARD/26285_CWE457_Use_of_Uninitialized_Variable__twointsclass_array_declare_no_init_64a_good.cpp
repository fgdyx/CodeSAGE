#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 TwoIntsClass VAR5[10];
 VAR4 = VAR5;
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 VAR4[VAR6].VAR7 = VAR6;
 VAR4[VAR6].VAR8 = VAR6;
 }
 FUN1(&VAR4);
}
void FUN3(void * VAR2);
static void FUN4()
{
 VAR3 * VAR4;
 TwoIntsClass VAR5[10];
 VAR4 = VAR5;
 ;
 FUN3(&VAR4);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
