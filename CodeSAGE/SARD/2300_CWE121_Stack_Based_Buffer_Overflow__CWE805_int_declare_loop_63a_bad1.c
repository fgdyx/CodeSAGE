#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 int VAR4[50];
 int VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 FUN1(&VAR3);
}
#endif
