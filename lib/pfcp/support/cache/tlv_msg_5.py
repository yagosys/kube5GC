ies = []
ies.append({ "ie_type" : "Node ID", "ie_value" : "Node ID", "presence" : "M", "instance" : "0", "comment" : "This IE shall contain the unique identifier of the sending Node."})
ies.append({ "ie_type" : "Recovery Time Stamp", "ie_value" : "Recovery Time Stamp", "presence" : "M", "instance" : "0", "comment" : "This IE shall contain the time stamp when the node was started, see clause 19A of 3GPPTS23.007[24]."})
ies.append({ "ie_type" : "UP Function Features", "ie_value" : "UP Function Features", "presence" : "C", "instance" : "0", "comment" : "This IE shall be present if the UP function sends this message and the UP function supports at least one UP feature defined in this IE. When present, this IE shall indicate the features the UP function supports."})
ies.append({ "ie_type" : "CP Function Features", "ie_value" : "CP Function Features", "presence" : "C", "instance" : "0", "comment" : "This IE shall be present if the CP function sends this message and the CP function supports at least one CP feature defined in this IE. When present, this IE shall indicate the features the CP function supports."})
ies.append({ "ie_type" : "User Plane IP Resource Information", "ie_value" : "User Plane IP Resource Information", "presence" : "O", "instance" : "0", "comment" : "This IE may be present if the UP function sends this message.When present, this IE shall contain an IPv4 and/or an IPv6 address, together with a TEID range that the CP function shall use to allocate GTP-U F-TEID in the UP function. Several IEs with the same IE type may be present to represent multiple User Plane IP Resources."})
msg_list[key]["ies"] = ies
