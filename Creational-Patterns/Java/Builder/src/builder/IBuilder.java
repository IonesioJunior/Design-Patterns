package builder;

import hardware.Processor;
import hardware.Memory;
import hardware.HardDisk;

/*
* Interface used to implement some type of builder
*/
public interface IBuilder {

    // Build a new Processor type
    public Processor getProcessor();
    // Build a new Memory type
    public Memory getMemory();
    // Build a new Hard Disk type
    public HardDisk getHardDisk();

}
