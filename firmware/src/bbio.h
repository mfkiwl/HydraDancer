#ifndef BBIO_H
#define BBIO_H

/* macros */


/* enums */
enum BbioCommand {
    BbioMainMode      = 0b00000000,
    BbioIdentifMode   = 0b00000001,
    BbioSetDescr      = 0b00000010,
};
enum BbioSubCommand {
    BbioSubSetDescrDevice      = 0b00000001,
    BbioSubSetDescrConfig      = 0b00000010,
    BbioSubSetDescrInterface   = 0b00000011,
    BbioSubSetDescrEndpoint    = 0b00000100,
    BbioSubSetDescrString      = 0b00000101,
};

/* variables */


/* functions declaration */


#endif /* BBIO_H */
