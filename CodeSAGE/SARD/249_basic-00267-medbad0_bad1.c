int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 17;
 VAR2 = 17 - (17 - 1);
 for(VAR3 = 0; VAR3 <= VAR1; )
 {
 /* BAD */
 VAR4[VAR3] = '';
 VAR3 += VAR2;
 }
 return 0;
}
