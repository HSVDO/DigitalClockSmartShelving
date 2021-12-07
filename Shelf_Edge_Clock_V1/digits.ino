
void digitZero(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment * 3);
    stripClock.fill(colour, ((ledsPerSegment * 4) + offset), ledsPerSegment * 3);
}

void digitOne(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment);
    stripClock.fill(colour, ((ledsPerSegment * 4) + offset), ledsPerSegment);
}

void digitTwo(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment  *2);
    stripClock.fill(colour, ((ledsPerSegment * 3) + offset), ledsPerSegment);
    stripClock.fill(colour, ((ledsPerSegment * 5) + offset), ledsPerSegment * 2);
}

void digitThree(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment * 2);
    stripClock.fill(colour, ((ledsPerSegment * 3) + offset), ledsPerSegment * 3);
}

void digitFour(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment);
    stripClock.fill(colour, ((ledsPerSegment * 2) + offset), ledsPerSegment * 3);
}

void digitFive(int offset, uint32_t colour){
    stripClock.fill(colour, ((ledsPerSegment * 1) + offset), ledsPerSegment * 5);
}

void digitSix(int offset, uint32_t colour){
    stripClock.fill(colour, ((ledsPerSegment * 1) + offset), ledsPerSegment * 6);
}

void digitSeven(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment * 2);
    stripClock.fill(colour, ((ledsPerSegment * 4) + offset), ledsPerSegment);
}

void digitEight(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment * 7);
}

void digitNine(int offset, uint32_t colour){
    stripClock.fill(colour, (0 + offset), ledsPerSegment * 6);
}
